/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
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
namespace SSMQuickSetup
{
namespace Model
{
  class CreateConfigurationManagerResult
  {
  public:
    AWS_SSMQUICKSETUP_API CreateConfigurationManagerResult();
    AWS_SSMQUICKSETUP_API CreateConfigurationManagerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API CreateConfigurationManagerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the newly created configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const{ return m_managerArn; }
    inline void SetManagerArn(const Aws::String& value) { m_managerArn = value; }
    inline void SetManagerArn(Aws::String&& value) { m_managerArn = std::move(value); }
    inline void SetManagerArn(const char* value) { m_managerArn.assign(value); }
    inline CreateConfigurationManagerResult& WithManagerArn(const Aws::String& value) { SetManagerArn(value); return *this;}
    inline CreateConfigurationManagerResult& WithManagerArn(Aws::String&& value) { SetManagerArn(std::move(value)); return *this;}
    inline CreateConfigurationManagerResult& WithManagerArn(const char* value) { SetManagerArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConfigurationManagerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConfigurationManagerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConfigurationManagerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_managerArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
