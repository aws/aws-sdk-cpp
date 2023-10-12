/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/AutoUpdate.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class UpdateAdapterRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API UpdateAdapterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAdapter"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }

    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterIdHasBeenSet = true; m_adapterId = value; }

    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::move(value); }

    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterIdHasBeenSet = true; m_adapterId.assign(value); }

    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline UpdateAdapterRequest& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline UpdateAdapterRequest& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline UpdateAdapterRequest& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline UpdateAdapterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline UpdateAdapterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline UpdateAdapterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline const Aws::String& GetAdapterName() const{ return m_adapterName; }

    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline bool AdapterNameHasBeenSet() const { return m_adapterNameHasBeenSet; }

    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline void SetAdapterName(const Aws::String& value) { m_adapterNameHasBeenSet = true; m_adapterName = value; }

    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline void SetAdapterName(Aws::String&& value) { m_adapterNameHasBeenSet = true; m_adapterName = std::move(value); }

    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline void SetAdapterName(const char* value) { m_adapterNameHasBeenSet = true; m_adapterName.assign(value); }

    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline UpdateAdapterRequest& WithAdapterName(const Aws::String& value) { SetAdapterName(value); return *this;}

    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline UpdateAdapterRequest& WithAdapterName(Aws::String&& value) { SetAdapterName(std::move(value)); return *this;}

    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline UpdateAdapterRequest& WithAdapterName(const char* value) { SetAdapterName(value); return *this;}


    /**
     * <p>The new auto-update status to be applied to the adapter.</p>
     */
    inline const AutoUpdate& GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>The new auto-update status to be applied to the adapter.</p>
     */
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }

    /**
     * <p>The new auto-update status to be applied to the adapter.</p>
     */
    inline void SetAutoUpdate(const AutoUpdate& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }

    /**
     * <p>The new auto-update status to be applied to the adapter.</p>
     */
    inline void SetAutoUpdate(AutoUpdate&& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = std::move(value); }

    /**
     * <p>The new auto-update status to be applied to the adapter.</p>
     */
    inline UpdateAdapterRequest& WithAutoUpdate(const AutoUpdate& value) { SetAutoUpdate(value); return *this;}

    /**
     * <p>The new auto-update status to be applied to the adapter.</p>
     */
    inline UpdateAdapterRequest& WithAutoUpdate(AutoUpdate&& value) { SetAutoUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_adapterName;
    bool m_adapterNameHasBeenSet = false;

    AutoUpdate m_autoUpdate;
    bool m_autoUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
