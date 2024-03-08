/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/model/EnvironmentSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpacesThinClient
{
namespace Model
{
  class CreateEnvironmentResult
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API CreateEnvironmentResult();
    AWS_WORKSPACESTHINCLIENT_API CreateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESTHINCLIENT_API CreateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes an environment.</p>
     */
    inline const EnvironmentSummary& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Describes an environment.</p>
     */
    inline void SetEnvironment(const EnvironmentSummary& value) { m_environment = value; }

    /**
     * <p>Describes an environment.</p>
     */
    inline void SetEnvironment(EnvironmentSummary&& value) { m_environment = std::move(value); }

    /**
     * <p>Describes an environment.</p>
     */
    inline CreateEnvironmentResult& WithEnvironment(const EnvironmentSummary& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Describes an environment.</p>
     */
    inline CreateEnvironmentResult& WithEnvironment(EnvironmentSummary&& value) { SetEnvironment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EnvironmentSummary m_environment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
