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
    AWS_ROLESANYWHERE_API GetSubjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSubject"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }

    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }

    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }

    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }

    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }

    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline GetSubjectRequest& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}

    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline GetSubjectRequest& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the subject. </p>
     */
    inline GetSubjectRequest& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}

  private:

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
