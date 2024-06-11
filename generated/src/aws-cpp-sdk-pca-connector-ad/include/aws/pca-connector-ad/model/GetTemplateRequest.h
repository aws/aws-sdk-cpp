﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class GetTemplateRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API GetTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplate"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline GetTemplateRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline GetTemplateRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline GetTemplateRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}
  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
