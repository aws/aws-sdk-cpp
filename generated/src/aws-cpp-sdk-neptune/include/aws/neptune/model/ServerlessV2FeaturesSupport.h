/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/neptune/Neptune_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Neptune {
namespace Model {

/**
 * <p>Specifies any Neptune Serverless properties or limits that differ between
 * serverless platform versions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ServerlessV2FeaturesSupport">AWS
 * API Reference</a></p>
 */
class ServerlessV2FeaturesSupport {
 public:
  AWS_NEPTUNE_API ServerlessV2FeaturesSupport() = default;
  AWS_NEPTUNE_API ServerlessV2FeaturesSupport(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_NEPTUNE_API ServerlessV2FeaturesSupport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Specifies the lower Neptune capacity unit (NCU) limit that a serverless
   * platform version supports.</p>
   */
  inline double GetMinCapacity() const { return m_minCapacity; }
  inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
  inline void SetMinCapacity(double value) {
    m_minCapacityHasBeenSet = true;
    m_minCapacity = value;
  }
  inline ServerlessV2FeaturesSupport& WithMinCapacity(double value) {
    SetMinCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the upper Neptune capacity unit (NCU) limit that a serverless
   * platform version supports.</p>
   */
  inline double GetMaxCapacity() const { return m_maxCapacity; }
  inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
  inline void SetMaxCapacity(double value) {
    m_maxCapacityHasBeenSet = true;
    m_maxCapacity = value;
  }
  inline ServerlessV2FeaturesSupport& WithMaxCapacity(double value) {
    SetMaxCapacity(value);
    return *this;
  }
  ///@}
 private:
  double m_minCapacity{0.0};

  double m_maxCapacity{0.0};
  bool m_minCapacityHasBeenSet = false;
  bool m_maxCapacityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Neptune
}  // namespace Aws
