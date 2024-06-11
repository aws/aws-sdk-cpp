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


    ///@{
    /**
     * <p>A string containing a unique ID for the adapter that will be updated.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }
    inline void SetAdapterId(const Aws::String& value) { m_adapterIdHasBeenSet = true; m_adapterId = value; }
    inline void SetAdapterId(Aws::String&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::move(value); }
    inline void SetAdapterId(const char* value) { m_adapterIdHasBeenSet = true; m_adapterId.assign(value); }
    inline UpdateAdapterRequest& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}
    inline UpdateAdapterRequest& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}
    inline UpdateAdapterRequest& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateAdapterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateAdapterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateAdapterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline const Aws::String& GetAdapterName() const{ return m_adapterName; }
    inline bool AdapterNameHasBeenSet() const { return m_adapterNameHasBeenSet; }
    inline void SetAdapterName(const Aws::String& value) { m_adapterNameHasBeenSet = true; m_adapterName = value; }
    inline void SetAdapterName(Aws::String&& value) { m_adapterNameHasBeenSet = true; m_adapterName = std::move(value); }
    inline void SetAdapterName(const char* value) { m_adapterNameHasBeenSet = true; m_adapterName.assign(value); }
    inline UpdateAdapterRequest& WithAdapterName(const Aws::String& value) { SetAdapterName(value); return *this;}
    inline UpdateAdapterRequest& WithAdapterName(Aws::String&& value) { SetAdapterName(std::move(value)); return *this;}
    inline UpdateAdapterRequest& WithAdapterName(const char* value) { SetAdapterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new auto-update status to be applied to the adapter.</p>
     */
    inline const AutoUpdate& GetAutoUpdate() const{ return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(const AutoUpdate& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline void SetAutoUpdate(AutoUpdate&& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = std::move(value); }
    inline UpdateAdapterRequest& WithAutoUpdate(const AutoUpdate& value) { SetAutoUpdate(value); return *this;}
    inline UpdateAdapterRequest& WithAutoUpdate(AutoUpdate&& value) { SetAutoUpdate(std::move(value)); return *this;}
    ///@}
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
