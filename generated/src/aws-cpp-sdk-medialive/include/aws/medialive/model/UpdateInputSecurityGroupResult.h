/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputSecurityGroup.h>
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
   * Placeholder documentation for UpdateInputSecurityGroupResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroupResponse">AWS
   * API Reference</a></p>
   */
  class UpdateInputSecurityGroupResult
  {
  public:
    AWS_MEDIALIVE_API UpdateInputSecurityGroupResult();
    AWS_MEDIALIVE_API UpdateInputSecurityGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateInputSecurityGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const InputSecurityGroup& GetSecurityGroup() const{ return m_securityGroup; }

    
    inline void SetSecurityGroup(const InputSecurityGroup& value) { m_securityGroup = value; }

    
    inline void SetSecurityGroup(InputSecurityGroup&& value) { m_securityGroup = std::move(value); }

    
    inline UpdateInputSecurityGroupResult& WithSecurityGroup(const InputSecurityGroup& value) { SetSecurityGroup(value); return *this;}

    
    inline UpdateInputSecurityGroupResult& WithSecurityGroup(InputSecurityGroup&& value) { SetSecurityGroup(std::move(value)); return *this;}

  private:

    InputSecurityGroup m_securityGroup;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
