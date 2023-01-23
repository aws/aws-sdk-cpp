/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/SelectionCriteria.h>
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
   * <p>A container for the prefix-level storage metrics for S3 Storage
   * Lens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PrefixLevelStorageMetrics">AWS
   * API Reference</a></p>
   */
  class PrefixLevelStorageMetrics
  {
  public:
    AWS_S3CONTROL_API PrefixLevelStorageMetrics();
    AWS_S3CONTROL_API PrefixLevelStorageMetrics(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API PrefixLevelStorageMetrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for whether prefix-level storage metrics are enabled.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }

    /**
     * <p>A container for whether prefix-level storage metrics are enabled.</p>
     */
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }

    /**
     * <p>A container for whether prefix-level storage metrics are enabled.</p>
     */
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }

    /**
     * <p>A container for whether prefix-level storage metrics are enabled.</p>
     */
    inline PrefixLevelStorageMetrics& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}


    
    inline const SelectionCriteria& GetSelectionCriteria() const{ return m_selectionCriteria; }

    
    inline bool SelectionCriteriaHasBeenSet() const { return m_selectionCriteriaHasBeenSet; }

    
    inline void SetSelectionCriteria(const SelectionCriteria& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = value; }

    
    inline void SetSelectionCriteria(SelectionCriteria&& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = std::move(value); }

    
    inline PrefixLevelStorageMetrics& WithSelectionCriteria(const SelectionCriteria& value) { SetSelectionCriteria(value); return *this;}

    
    inline PrefixLevelStorageMetrics& WithSelectionCriteria(SelectionCriteria&& value) { SetSelectionCriteria(std::move(value)); return *this;}

  private:

    bool m_isEnabled;
    bool m_isEnabledHasBeenSet = false;

    SelectionCriteria m_selectionCriteria;
    bool m_selectionCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
