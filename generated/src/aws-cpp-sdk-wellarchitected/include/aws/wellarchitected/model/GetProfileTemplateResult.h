/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ProfileTemplate.h>
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
namespace WellArchitected
{
namespace Model
{
  class GetProfileTemplateResult
  {
  public:
    AWS_WELLARCHITECTED_API GetProfileTemplateResult() = default;
    AWS_WELLARCHITECTED_API GetProfileTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetProfileTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The profile template.</p>
     */
    inline const ProfileTemplate& GetProfileTemplate() const { return m_profileTemplate; }
    template<typename ProfileTemplateT = ProfileTemplate>
    void SetProfileTemplate(ProfileTemplateT&& value) { m_profileTemplateHasBeenSet = true; m_profileTemplate = std::forward<ProfileTemplateT>(value); }
    template<typename ProfileTemplateT = ProfileTemplate>
    GetProfileTemplateResult& WithProfileTemplate(ProfileTemplateT&& value) { SetProfileTemplate(std::forward<ProfileTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProfileTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProfileTemplate m_profileTemplate;
    bool m_profileTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
