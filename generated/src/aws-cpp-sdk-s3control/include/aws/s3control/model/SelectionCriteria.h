/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SelectionCriteria">AWS
   * API Reference</a></p>
   */
  class SelectionCriteria
  {
  public:
    AWS_S3CONTROL_API SelectionCriteria() = default;
    AWS_S3CONTROL_API SelectionCriteria(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API SelectionCriteria& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for the delimiter of the selection criteria being used.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    SelectionCriteria& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The max depth of the selection criteria</p>
     */
    inline int GetMaxDepth() const { return m_maxDepth; }
    inline bool MaxDepthHasBeenSet() const { return m_maxDepthHasBeenSet; }
    inline void SetMaxDepth(int value) { m_maxDepthHasBeenSet = true; m_maxDepth = value; }
    inline SelectionCriteria& WithMaxDepth(int value) { SetMaxDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of storage bytes percentage whose metrics will be
     * selected.</p>  <p>You must choose a value greater than or equal to
     * <code>1.0</code>.</p> 
     */
    inline double GetMinStorageBytesPercentage() const { return m_minStorageBytesPercentage; }
    inline bool MinStorageBytesPercentageHasBeenSet() const { return m_minStorageBytesPercentageHasBeenSet; }
    inline void SetMinStorageBytesPercentage(double value) { m_minStorageBytesPercentageHasBeenSet = true; m_minStorageBytesPercentage = value; }
    inline SelectionCriteria& WithMinStorageBytesPercentage(double value) { SetMinStorageBytesPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    int m_maxDepth{0};
    bool m_maxDepthHasBeenSet = false;

    double m_minStorageBytesPercentage{0.0};
    bool m_minStorageBytesPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
