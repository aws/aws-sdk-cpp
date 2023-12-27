/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class UpdateAnnotationStoreVersionRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API UpdateAnnotationStoreVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnnotationStoreVersion"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of an annotation store. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The name of an annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p> The description of an annotation store. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of an annotation store. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of an annotation store. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of an annotation store. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of an annotation store. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
