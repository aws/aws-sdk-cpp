/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for CreateInstance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateInstanceRequest">AWS
   * API Reference</a></p>
   */
  class CreateInstanceRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API CreateInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstance"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The AWS Supply Chain instance name.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline CreateInstanceRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline CreateInstanceRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline CreateInstanceRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Supply Chain instance description.</p>
     */
    inline const Aws::String& GetInstanceDescription() const{ return m_instanceDescription; }
    inline bool InstanceDescriptionHasBeenSet() const { return m_instanceDescriptionHasBeenSet; }
    inline void SetInstanceDescription(const Aws::String& value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription = value; }
    inline void SetInstanceDescription(Aws::String&& value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription = std::move(value); }
    inline void SetInstanceDescription(const char* value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription.assign(value); }
    inline CreateInstanceRequest& WithInstanceDescription(const Aws::String& value) { SetInstanceDescription(value); return *this;}
    inline CreateInstanceRequest& WithInstanceDescription(Aws::String&& value) { SetInstanceDescription(std::move(value)); return *this;}
    inline CreateInstanceRequest& WithInstanceDescription(const char* value) { SetInstanceDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * Web Services owned KMS key. If you don't provide anything here, AWS Supply Chain
     * uses the Amazon Web Services owned KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline CreateInstanceRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline CreateInstanceRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline CreateInstanceRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS subdomain of the web app. This would be "example" in the URL
     * "example.scn.global.on.aws". You can set this to a custom value, as long as the
     * domain isn't already being used by someone else. The name may only include
     * alphanumeric characters and hyphens.</p>
     */
    inline const Aws::String& GetWebAppDnsDomain() const{ return m_webAppDnsDomain; }
    inline bool WebAppDnsDomainHasBeenSet() const { return m_webAppDnsDomainHasBeenSet; }
    inline void SetWebAppDnsDomain(const Aws::String& value) { m_webAppDnsDomainHasBeenSet = true; m_webAppDnsDomain = value; }
    inline void SetWebAppDnsDomain(Aws::String&& value) { m_webAppDnsDomainHasBeenSet = true; m_webAppDnsDomain = std::move(value); }
    inline void SetWebAppDnsDomain(const char* value) { m_webAppDnsDomainHasBeenSet = true; m_webAppDnsDomain.assign(value); }
    inline CreateInstanceRequest& WithWebAppDnsDomain(const Aws::String& value) { SetWebAppDnsDomain(value); return *this;}
    inline CreateInstanceRequest& WithWebAppDnsDomain(Aws::String&& value) { SetWebAppDnsDomain(std::move(value)); return *this;}
    inline CreateInstanceRequest& WithWebAppDnsDomain(const char* value) { SetWebAppDnsDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services tags of an instance to be created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInstanceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateInstanceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInstanceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateInstanceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateInstanceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateInstanceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateInstanceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateInstanceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateInstanceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The client token for idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateInstanceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateInstanceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateInstanceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_instanceDescription;
    bool m_instanceDescriptionHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_webAppDnsDomain;
    bool m_webAppDnsDomainHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
