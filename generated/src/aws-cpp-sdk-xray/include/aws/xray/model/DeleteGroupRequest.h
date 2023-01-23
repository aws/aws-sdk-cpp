/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class DeleteGroupRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API DeleteGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGroup"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline DeleteGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline DeleteGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline DeleteGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ARN of the group that was generated on creation.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }

    /**
     * <p>The ARN of the group that was generated on creation.</p>
     */
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }

    /**
     * <p>The ARN of the group that was generated on creation.</p>
     */
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }

    /**
     * <p>The ARN of the group that was generated on creation.</p>
     */
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }

    /**
     * <p>The ARN of the group that was generated on creation.</p>
     */
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }

    /**
     * <p>The ARN of the group that was generated on creation.</p>
     */
    inline DeleteGroupRequest& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}

    /**
     * <p>The ARN of the group that was generated on creation.</p>
     */
    inline DeleteGroupRequest& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the group that was generated on creation.</p>
     */
    inline DeleteGroupRequest& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
