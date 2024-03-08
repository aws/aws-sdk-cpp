/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/TierLevel.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class UpdateSpaceRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API UpdateSpaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSpace"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline UpdateSpaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline UpdateSpaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline UpdateSpaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline UpdateSpaceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline UpdateSpaceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline UpdateSpaceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }

    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }

    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline void SetSpaceId(const Aws::String& value) { m_spaceIdHasBeenSet = true; m_spaceId = value; }

    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline void SetSpaceId(Aws::String&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::move(value); }

    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline void SetSpaceId(const char* value) { m_spaceIdHasBeenSet = true; m_spaceId.assign(value); }

    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline UpdateSpaceRequest& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}

    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline UpdateSpaceRequest& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline UpdateSpaceRequest& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}


    /**
     * <p>The pricing tier of this private re:Post.</p>
     */
    inline const TierLevel& GetTier() const{ return m_tier; }

    /**
     * <p>The pricing tier of this private re:Post.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The pricing tier of this private re:Post.</p>
     */
    inline void SetTier(const TierLevel& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The pricing tier of this private re:Post.</p>
     */
    inline void SetTier(TierLevel&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The pricing tier of this private re:Post.</p>
     */
    inline UpdateSpaceRequest& WithTier(const TierLevel& value) { SetTier(value); return *this;}

    /**
     * <p>The pricing tier of this private re:Post.</p>
     */
    inline UpdateSpaceRequest& WithTier(TierLevel&& value) { SetTier(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    TierLevel m_tier;
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
