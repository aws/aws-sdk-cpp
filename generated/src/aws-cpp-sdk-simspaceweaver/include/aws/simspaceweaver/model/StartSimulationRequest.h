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
    AWS_SIMSPACEWEAVER_API StartSimulationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSimulation"; }

    AWS_SIMSPACEWEAVER_API Aws::String SerializePayload() const override;


    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline StartSimulationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline StartSimulationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline StartSimulationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of the simulation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the simulation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the simulation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the simulation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the simulation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the simulation.</p>
     */
    inline StartSimulationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the simulation.</p>
     */
    inline StartSimulationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the simulation.</p>
     */
    inline StartSimulationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline const Aws::String& GetMaximumDuration() const{ return m_maximumDuration; }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline bool MaximumDurationHasBeenSet() const { return m_maximumDurationHasBeenSet; }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline void SetMaximumDuration(const Aws::String& value) { m_maximumDurationHasBeenSet = true; m_maximumDuration = value; }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline void SetMaximumDuration(Aws::String&& value) { m_maximumDurationHasBeenSet = true; m_maximumDuration = std::move(value); }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline void SetMaximumDuration(const char* value) { m_maximumDurationHasBeenSet = true; m_maximumDuration.assign(value); }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline StartSimulationRequest& WithMaximumDuration(const Aws::String& value) { SetMaximumDuration(value); return *this;}

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline StartSimulationRequest& WithMaximumDuration(Aws::String&& value) { SetMaximumDuration(std::move(value)); return *this;}

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline StartSimulationRequest& WithMaximumDuration(const char* value) { SetMaximumDuration(value); return *this;}


    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline StartSimulationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline StartSimulationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline StartSimulationRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

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
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

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
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

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
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

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
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

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
    inline StartSimulationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

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
    inline StartSimulationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

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
    inline StartSimulationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline const S3Location& GetSchemaS3Location() const{ return m_schemaS3Location; }

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline bool SchemaS3LocationHasBeenSet() const { return m_schemaS3LocationHasBeenSet; }

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline void SetSchemaS3Location(const S3Location& value) { m_schemaS3LocationHasBeenSet = true; m_schemaS3Location = value; }

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline void SetSchemaS3Location(S3Location&& value) { m_schemaS3LocationHasBeenSet = true; m_schemaS3Location = std::move(value); }

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline StartSimulationRequest& WithSchemaS3Location(const S3Location& value) { SetSchemaS3Location(value); return *this;}

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline StartSimulationRequest& WithSchemaS3Location(S3Location&& value) { SetSchemaS3Location(std::move(value)); return *this;}


    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags for the simulation. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline StartSimulationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
