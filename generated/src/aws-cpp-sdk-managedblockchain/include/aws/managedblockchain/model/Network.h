/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/Framework.h>
#include <aws/managedblockchain/model/NetworkFrameworkAttributes.h>
#include <aws/managedblockchain/model/VotingPolicy.h>
#include <aws/managedblockchain/model/NetworkStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Network configuration properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/Network">AWS
   * API Reference</a></p>
   */
  class Network
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API Network();
    AWS_MANAGEDBLOCKCHAIN_API Network(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Network& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the network.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Network& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Network& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Network& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Network& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Network& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Network& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Network& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Network& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Network& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    inline void SetFramework(const Framework& value) { m_frameworkHasBeenSet = true; m_framework = value; }
    inline void SetFramework(Framework&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }
    inline Network& WithFramework(const Framework& value) { SetFramework(value); return *this;}
    inline Network& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }
    inline Network& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}
    inline Network& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}
    inline Network& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of the blockchain framework that the network uses.</p>
     */
    inline const NetworkFrameworkAttributes& GetFrameworkAttributes() const{ return m_frameworkAttributes; }
    inline bool FrameworkAttributesHasBeenSet() const { return m_frameworkAttributesHasBeenSet; }
    inline void SetFrameworkAttributes(const NetworkFrameworkAttributes& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = value; }
    inline void SetFrameworkAttributes(NetworkFrameworkAttributes&& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = std::move(value); }
    inline Network& WithFrameworkAttributes(const NetworkFrameworkAttributes& value) { SetFrameworkAttributes(value); return *this;}
    inline Network& WithFrameworkAttributes(NetworkFrameworkAttributes&& value) { SetFrameworkAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const{ return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    inline void SetVpcEndpointServiceName(const Aws::String& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = value; }
    inline void SetVpcEndpointServiceName(Aws::String&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::move(value); }
    inline void SetVpcEndpointServiceName(const char* value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName.assign(value); }
    inline Network& WithVpcEndpointServiceName(const Aws::String& value) { SetVpcEndpointServiceName(value); return *this;}
    inline Network& WithVpcEndpointServiceName(Aws::String&& value) { SetVpcEndpointServiceName(std::move(value)); return *this;}
    inline Network& WithVpcEndpointServiceName(const char* value) { SetVpcEndpointServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The voting rules that the network uses to decide if a proposal is
     * accepted.</p>
     */
    inline const VotingPolicy& GetVotingPolicy() const{ return m_votingPolicy; }
    inline bool VotingPolicyHasBeenSet() const { return m_votingPolicyHasBeenSet; }
    inline void SetVotingPolicy(const VotingPolicy& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = value; }
    inline void SetVotingPolicy(VotingPolicy&& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = std::move(value); }
    inline Network& WithVotingPolicy(const VotingPolicy& value) { SetVotingPolicy(value); return *this;}
    inline Network& WithVotingPolicy(VotingPolicy&& value) { SetVotingPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the network.</p>
     */
    inline const NetworkStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NetworkStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NetworkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Network& WithStatus(const NetworkStatus& value) { SetStatus(value); return *this;}
    inline Network& WithStatus(NetworkStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the network was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline Network& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline Network& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the network. Each tag consists of a key and optional
     * value.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Network& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Network& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Network& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Network& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Network& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Network& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Network& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Network& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Network& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Network& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Network& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Network& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Framework m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;

    NetworkFrameworkAttributes m_frameworkAttributes;
    bool m_frameworkAttributesHasBeenSet = false;

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;

    VotingPolicy m_votingPolicy;
    bool m_votingPolicyHasBeenSet = false;

    NetworkStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
