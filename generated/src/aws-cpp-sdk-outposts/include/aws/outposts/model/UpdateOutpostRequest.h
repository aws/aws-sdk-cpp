/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/SupportedHardwareType.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class UpdateOutpostRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API UpdateOutpostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOutpost"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline UpdateOutpostRequest& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline UpdateOutpostRequest& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline UpdateOutpostRequest& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline UpdateOutpostRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateOutpostRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateOutpostRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline UpdateOutpostRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline UpdateOutpostRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline UpdateOutpostRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline const SupportedHardwareType& GetSupportedHardwareType() const{ return m_supportedHardwareType; }

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline bool SupportedHardwareTypeHasBeenSet() const { return m_supportedHardwareTypeHasBeenSet; }

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline void SetSupportedHardwareType(const SupportedHardwareType& value) { m_supportedHardwareTypeHasBeenSet = true; m_supportedHardwareType = value; }

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline void SetSupportedHardwareType(SupportedHardwareType&& value) { m_supportedHardwareTypeHasBeenSet = true; m_supportedHardwareType = std::move(value); }

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline UpdateOutpostRequest& WithSupportedHardwareType(const SupportedHardwareType& value) { SetSupportedHardwareType(value); return *this;}

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline UpdateOutpostRequest& WithSupportedHardwareType(SupportedHardwareType&& value) { SetSupportedHardwareType(std::move(value)); return *this;}

  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SupportedHardwareType m_supportedHardwareType;
    bool m_supportedHardwareTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
