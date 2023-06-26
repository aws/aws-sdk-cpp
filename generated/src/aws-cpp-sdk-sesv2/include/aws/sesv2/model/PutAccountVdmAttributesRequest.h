/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/model/VdmAttributes.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to submit new account VDM attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountVdmAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutAccountVdmAttributesRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutAccountVdmAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountVdmAttributes"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The VDM attributes that you wish to apply to your Amazon SES account.</p>
     */
    inline const VdmAttributes& GetVdmAttributes() const{ return m_vdmAttributes; }

    /**
     * <p>The VDM attributes that you wish to apply to your Amazon SES account.</p>
     */
    inline bool VdmAttributesHasBeenSet() const { return m_vdmAttributesHasBeenSet; }

    /**
     * <p>The VDM attributes that you wish to apply to your Amazon SES account.</p>
     */
    inline void SetVdmAttributes(const VdmAttributes& value) { m_vdmAttributesHasBeenSet = true; m_vdmAttributes = value; }

    /**
     * <p>The VDM attributes that you wish to apply to your Amazon SES account.</p>
     */
    inline void SetVdmAttributes(VdmAttributes&& value) { m_vdmAttributesHasBeenSet = true; m_vdmAttributes = std::move(value); }

    /**
     * <p>The VDM attributes that you wish to apply to your Amazon SES account.</p>
     */
    inline PutAccountVdmAttributesRequest& WithVdmAttributes(const VdmAttributes& value) { SetVdmAttributes(value); return *this;}

    /**
     * <p>The VDM attributes that you wish to apply to your Amazon SES account.</p>
     */
    inline PutAccountVdmAttributesRequest& WithVdmAttributes(VdmAttributes&& value) { SetVdmAttributes(std::move(value)); return *this;}

  private:

    VdmAttributes m_vdmAttributes;
    bool m_vdmAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
