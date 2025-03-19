/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateServiceRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateServiceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateService"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The edited service description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateServiceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service to edit.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateServiceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the service instances to add and the existing service instances to
     * remain. Omit the existing service instances to delete from the list.
     * <i>Don't</i> include edits to the existing service instances or pipeline. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-update.html">Edit
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = Aws::String>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = Aws::String>
    UpdateServiceRequest& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
