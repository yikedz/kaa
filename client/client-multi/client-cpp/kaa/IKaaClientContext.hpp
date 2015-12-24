/*
 * Copyright 2014-2015 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IKAACLIENTCONTEXT
#define IKAACLIENTCONTEXT

#include <memory>

namespace kaa {

class KaaClientProperties;
class ILogger;
class IKaaClientStateStorage;
class IExecutorContext;

class IKaaClientContext {
public:
    virtual void setProperties(const KaaClientProperties &properties) = 0;
    virtual void setLogger(const ILogger &logger) = 0;
    virtual void setStatus(const IKaaClientStateStorage &state) = 0;
    virtual void setExecutorContext(const IExecutorContext &executorContext) = 0;

    virtual KaaClientProperties &getProperties() = 0;
    virtual ILogger &getLogger() = 0;
    virtual IKaaClientStateStorage &getStatus() = 0;
    virtual IExecutorContext &getExecutorContext() = 0;

    virtual ~IKaaClientContext() = default;
};

}

#endif // IKAACLIENTCONTEXT

