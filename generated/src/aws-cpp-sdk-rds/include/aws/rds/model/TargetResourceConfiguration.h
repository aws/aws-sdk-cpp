/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>The configuration for a single resource in the green environment of a
 * blue/green deployment.</p> <p>Use <code>SourceArn</code> to identify a resource
 * in the blue environment. Amazon RDS creates the corresponding resource in the
 * green environment using this configuration.</p> <p>This data type is a request
 * parameter of the <code>CreateBlueGreenDeployment</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/TargetResourceConfiguration">AWS
 * API Reference</a></p>
 */
class TargetResourceConfiguration {
 public:
  AWS_RDS_API TargetResourceConfiguration() = default;
  AWS_RDS_API TargetResourceConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API TargetResourceConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the DB cluster or DB instance in the blue
   * environment to which this configuration applies.</p>
   */
  inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
  inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
  template <typename SourceArnT = Aws::String>
  void SetSourceArn(SourceArnT&& value) {
    m_sourceArnHasBeenSet = true;
    m_sourceArn = std::forward<SourceArnT>(value);
  }
  template <typename SourceArnT = Aws::String>
  TargetResourceConfiguration& WithSourceArn(SourceArnT&& value) {
    SetSourceArn(std::forward<SourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services KMS key identifier for encryption of the
   * corresponding resource in the green environment.</p> <p>The Amazon Web Services
   * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
   * key.</p> <p>Specify this setting in either of the following cases:</p> <ul> <li>
   * <p>You want the green resource to use a different KMS key than the blue
   * resource.</p> </li> <li> <p>The blue resource is unencrypted and you want to
   * encrypt the green resource.</p> </li> </ul> <p>For Aurora, encryption applies at
   * the DB cluster level. Specify a DB cluster ARN in <code>SourceArn</code>. All DB
   * instances in that cluster use the same KMS key.</p> <p>For RDS, encryption
   * applies at the DB instance level. Specify a DB instance ARN in
   * <code>SourceArn</code>. To encrypt read replicas, include a separate entry for
   * each one. Each entry can specify a different KMS key.</p>
   */
  inline const Aws::String& GetTargetKmsKeyId() const { return m_targetKmsKeyId; }
  inline bool TargetKmsKeyIdHasBeenSet() const { return m_targetKmsKeyIdHasBeenSet; }
  template <typename TargetKmsKeyIdT = Aws::String>
  void SetTargetKmsKeyId(TargetKmsKeyIdT&& value) {
    m_targetKmsKeyIdHasBeenSet = true;
    m_targetKmsKeyId = std::forward<TargetKmsKeyIdT>(value);
  }
  template <typename TargetKmsKeyIdT = Aws::String>
  TargetResourceConfiguration& WithTargetKmsKeyId(TargetKmsKeyIdT&& value) {
    SetTargetKmsKeyId(std::forward<TargetKmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceArn;

  Aws::String m_targetKmsKeyId;
  bool m_sourceArnHasBeenSet = false;
  bool m_targetKmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
