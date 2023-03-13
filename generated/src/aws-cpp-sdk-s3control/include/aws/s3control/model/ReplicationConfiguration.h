/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ReplicationRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for one or more replication rules. A replication configuration
   * must have at least one rule and you can add up to 100 rules. The maximum size of
   * a replication configuration is 128 KB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class ReplicationConfiguration
  {
  public:
    AWS_S3CONTROL_API ReplicationConfiguration();
    AWS_S3CONTROL_API ReplicationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ReplicationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that S3 on Outposts assumes when replicating objects. For information about
     * S3 replication on Outposts configuration, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-how-setup.html">Setting
     * up replication</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that S3 on Outposts assumes when replicating objects. For information about
     * S3 replication on Outposts configuration, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-how-setup.html">Setting
     * up replication</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that S3 on Outposts assumes when replicating objects. For information about
     * S3 replication on Outposts configuration, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-how-setup.html">Setting
     * up replication</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that S3 on Outposts assumes when replicating objects. For information about
     * S3 replication on Outposts configuration, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-how-setup.html">Setting
     * up replication</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that S3 on Outposts assumes when replicating objects. For information about
     * S3 replication on Outposts configuration, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-how-setup.html">Setting
     * up replication</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that S3 on Outposts assumes when replicating objects. For information about
     * S3 replication on Outposts configuration, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-how-setup.html">Setting
     * up replication</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ReplicationConfiguration& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that S3 on Outposts assumes when replicating objects. For information about
     * S3 replication on Outposts configuration, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-how-setup.html">Setting
     * up replication</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ReplicationConfiguration& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that S3 on Outposts assumes when replicating objects. For information about
     * S3 replication on Outposts configuration, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-how-setup.html">Setting
     * up replication</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ReplicationConfiguration& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and can contain an array of 100 rules at the most.
     * </p>
     */
    inline const Aws::Vector<ReplicationRule>& GetRules() const{ return m_rules; }

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and can contain an array of 100 rules at the most.
     * </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and can contain an array of 100 rules at the most.
     * </p>
     */
    inline void SetRules(const Aws::Vector<ReplicationRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and can contain an array of 100 rules at the most.
     * </p>
     */
    inline void SetRules(Aws::Vector<ReplicationRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and can contain an array of 100 rules at the most.
     * </p>
     */
    inline ReplicationConfiguration& WithRules(const Aws::Vector<ReplicationRule>& value) { SetRules(value); return *this;}

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and can contain an array of 100 rules at the most.
     * </p>
     */
    inline ReplicationConfiguration& WithRules(Aws::Vector<ReplicationRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and can contain an array of 100 rules at the most.
     * </p>
     */
    inline ReplicationConfiguration& AddRules(const ReplicationRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and can contain an array of 100 rules at the most.
     * </p>
     */
    inline ReplicationConfiguration& AddRules(ReplicationRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::Vector<ReplicationRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
