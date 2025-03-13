/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputSecurityGroup.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for CreateInputSecurityGroupResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroupResponse">AWS
   * API Reference</a></p>
   */
  class CreateInputSecurityGroupResult
  {
  public:
    AWS_MEDIALIVE_API CreateInputSecurityGroupResult() = default;
    AWS_MEDIALIVE_API CreateInputSecurityGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateInputSecurityGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const InputSecurityGroup& GetSecurityGroup() const { return m_securityGroup; }
    template<typename SecurityGroupT = InputSecurityGroup>
    void SetSecurityGroup(SecurityGroupT&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::forward<SecurityGroupT>(value); }
    template<typename SecurityGroupT = InputSecurityGroup>
    CreateInputSecurityGroupResult& WithSecurityGroup(SecurityGroupT&& value) { SetSecurityGroup(std::forward<SecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateInputSecurityGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InputSecurityGroup m_securityGroup;
    bool m_securityGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
