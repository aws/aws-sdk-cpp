/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/SimSpaceWeaverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simspaceweaver/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   */
  class StartSimulationRequest : public SimSpaceWeaverRequest
  {
  public:
    AWS_SIMSPACEWEAVER_API StartSimulationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSimulation"; }

    AWS_SIMSPACEWEAVER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartSimulationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the simulation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartSimulationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum running time of the simulation, specified as a number of minutes
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit. The maximum value is <code>14D</code>, or its equivalent in the
     * other units. The default value is <code>14D</code>. A value equivalent to
     * <code>0</code> makes the simulation immediately transition to
     * <code>Stopping</code> as soon as it reaches <code>Started</code>.</p>
     */
    inline const Aws::String& GetMaximumDuration() const { return m_maximumDuration; }
    inline bool MaximumDurationHasBeenSet() const { return m_maximumDurationHasBeenSet; }
    template<typename MaximumDurationT = Aws::String>
    void SetMaximumDuration(MaximumDurationT&& value) { m_maximumDurationHasBeenSet = true; m_maximumDuration = std::forward<MaximumDurationT>(value); }
    template<typename MaximumDurationT = Aws::String>
    StartSimulationRequest& WithMaximumDuration(MaximumDurationT&& value) { SetMaximumDuration(std::forward<MaximumDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartSimulationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StartSimulationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p> <p>Provide a
     * <code>SchemaS3Location</code> to start your simulation from a schema.</p> <p>If
     * you provide a <code>SchemaS3Location</code> then you can't provide a
     * <code>SnapshotS3Location</code>.</p>
     */
    inline const S3Location& GetSchemaS3Location() const { return m_schemaS3Location; }
    inline bool SchemaS3LocationHasBeenSet() const { return m_schemaS3LocationHasBeenSet; }
    template<typename SchemaS3LocationT = S3Location>
    void SetSchemaS3Location(SchemaS3LocationT&& value) { m_schemaS3LocationHasBeenSet = true; m_schemaS3Location = std::forward<SchemaS3LocationT>(value); }
    template<typename SchemaS3LocationT = S3Location>
    StartSimulationRequest& WithSchemaS3Location(SchemaS3LocationT&& value) { SetSchemaS3Location(std::forward<SchemaS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the snapshot .zip file in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p> <p>Provide a
     * <code>SnapshotS3Location</code> to start your simulation from a snapshot.</p>
     * <p>The Amazon S3 bucket must be in the same Amazon Web Services Region as the
     * simulation.</p> <p>If you provide a <code>SnapshotS3Location</code> then you
     * can't provide a <code>SchemaS3Location</code>.</p>
     */
    inline const S3Location& GetSnapshotS3Location() const { return m_snapshotS3Location; }
    inline bool SnapshotS3LocationHasBeenSet() const { return m_snapshotS3LocationHasBeenSet; }
    template<typename SnapshotS3LocationT = S3Location>
    void SetSnapshotS3Location(SnapshotS3LocationT&& value) { m_snapshotS3LocationHasBeenSet = true; m_snapshotS3Location = std::forward<SnapshotS3LocationT>(value); }
    template<typename SnapshotS3LocationT = S3Location>
    StartSimulationRequest& WithSnapshotS3Location(SnapshotS3LocationT&& value) { SetSnapshotS3Location(std::forward<SnapshotS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartSimulationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartSimulationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_maximumDuration;
    bool m_maximumDurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    S3Location m_schemaS3Location;
    bool m_schemaS3LocationHasBeenSet = false;

    S3Location m_snapshotS3Location;
    bool m_snapshotS3LocationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
