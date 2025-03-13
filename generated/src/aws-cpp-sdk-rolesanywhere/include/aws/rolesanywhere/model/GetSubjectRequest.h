/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class GetSubjectRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API GetSubjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSubject"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline const Aws::String& GetSubjectId() const { return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    template<typename SubjectIdT = Aws::String>
    void SetSubjectId(SubjectIdT&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::forward<SubjectIdT>(value); }
    template<typename SubjectIdT = Aws::String>
    GetSubjectRequest& WithSubjectId(SubjectIdT&& value) { SetSubjectId(std::forward<SubjectIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
