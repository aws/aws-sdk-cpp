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
    AWS_TEXTRACT_API UpdateAdapterRequest() = default;

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
    inline const Aws::String& GetAdapterId() const { return m_adapterId; }
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }
    template<typename AdapterIdT = Aws::String>
    void SetAdapterId(AdapterIdT&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::forward<AdapterIdT>(value); }
    template<typename AdapterIdT = Aws::String>
    UpdateAdapterRequest& WithAdapterId(AdapterIdT&& value) { SetAdapterId(std::forward<AdapterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description to be applied to the adapter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAdapterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name to be applied to the adapter.</p>
     */
    inline const Aws::String& GetAdapterName() const { return m_adapterName; }
    inline bool AdapterNameHasBeenSet() const { return m_adapterNameHasBeenSet; }
    template<typename AdapterNameT = Aws::String>
    void SetAdapterName(AdapterNameT&& value) { m_adapterNameHasBeenSet = true; m_adapterName = std::forward<AdapterNameT>(value); }
    template<typename AdapterNameT = Aws::String>
    UpdateAdapterRequest& WithAdapterName(AdapterNameT&& value) { SetAdapterName(std::forward<AdapterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new auto-update status to be applied to the adapter.</p>
     */
    inline AutoUpdate GetAutoUpdate() const { return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(AutoUpdate value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline UpdateAdapterRequest& WithAutoUpdate(AutoUpdate value) { SetAutoUpdate(value); return *this;}
    ///@}
  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_adapterName;
    bool m_adapterNameHasBeenSet = false;

    AutoUpdate m_autoUpdate{AutoUpdate::NOT_SET};
    bool m_autoUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
