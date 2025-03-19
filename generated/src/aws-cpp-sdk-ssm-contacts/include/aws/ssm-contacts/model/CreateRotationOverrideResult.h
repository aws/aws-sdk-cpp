/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
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
namespace SSMContacts
{
namespace Model
{
  class CreateRotationOverrideResult
  {
  public:
    AWS_SSMCONTACTS_API CreateRotationOverrideResult() = default;
    AWS_SSMCONTACTS_API CreateRotationOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API CreateRotationOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation override.</p>
     */
    inline const Aws::String& GetRotationOverrideId() const { return m_rotationOverrideId; }
    template<typename RotationOverrideIdT = Aws::String>
    void SetRotationOverrideId(RotationOverrideIdT&& value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId = std::forward<RotationOverrideIdT>(value); }
    template<typename RotationOverrideIdT = Aws::String>
    CreateRotationOverrideResult& WithRotationOverrideId(RotationOverrideIdT&& value) { SetRotationOverrideId(std::forward<RotationOverrideIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRotationOverrideResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rotationOverrideId;
    bool m_rotationOverrideIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
