/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberFrameworkConfiguration.h>
#include <aws/managedblockchain/model/MemberLogPublishingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties of the member.</p> <p>Applies only to Hyperledger
   * Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberConfiguration() = default;
    AWS_MANAGEDBLOCKCHAIN_API MemberConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MemberConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the member.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MemberConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline const MemberFrameworkConfiguration& GetFrameworkConfiguration() const { return m_frameworkConfiguration; }
    inline bool FrameworkConfigurationHasBeenSet() const { return m_frameworkConfigurationHasBeenSet; }
    template<typename FrameworkConfigurationT = MemberFrameworkConfiguration>
    void SetFrameworkConfiguration(FrameworkConfigurationT&& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = std::forward<FrameworkConfigurationT>(value); }
    template<typename FrameworkConfigurationT = MemberFrameworkConfiguration>
    MemberConfiguration& WithFrameworkConfiguration(FrameworkConfigurationT&& value) { SetFrameworkConfiguration(std::forward<FrameworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties for logging events associated with a member of a
     * Managed Blockchain network.</p>
     */
    inline const MemberLogPublishingConfiguration& GetLogPublishingConfiguration() const { return m_logPublishingConfiguration; }
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }
    template<typename LogPublishingConfigurationT = MemberLogPublishingConfiguration>
    void SetLogPublishingConfiguration(LogPublishingConfigurationT&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::forward<LogPublishingConfigurationT>(value); }
    template<typename LogPublishingConfigurationT = MemberLogPublishingConfiguration>
    MemberConfiguration& WithLogPublishingConfiguration(LogPublishingConfigurationT&& value) { SetLogPublishingConfiguration(std::forward<LogPublishingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. </p>
     * <p>When specifying tags during creation, you can specify multiple key-value
     * pairs in a single request, with an overall maximum of 50 tags added to each
     * resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    MemberConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    MemberConfiguration& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    MemberConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MemberFrameworkConfiguration m_frameworkConfiguration;
    bool m_frameworkConfigurationHasBeenSet = false;

    MemberLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
