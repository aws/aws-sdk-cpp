/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3Tag.h>
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
   * <p>Contains the configuration parameters for a PUT Object Tagging operation. S3
   * Batch Operations passes every object to the underlying
   * <code>PutObjectTagging</code> API operation. For more information about the
   * parameters for this operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectPUTtagging.html">PutObjectTagging</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3SetObjectTaggingOperation">AWS
   * API Reference</a></p>
   */
  class S3SetObjectTaggingOperation
  {
  public:
    AWS_S3CONTROL_API S3SetObjectTaggingOperation() = default;
    AWS_S3CONTROL_API S3SetObjectTaggingOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3SetObjectTaggingOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<S3Tag>& GetTagSet() const { return m_tagSet; }
    inline bool TagSetHasBeenSet() const { return m_tagSetHasBeenSet; }
    template<typename TagSetT = Aws::Vector<S3Tag>>
    void SetTagSet(TagSetT&& value) { m_tagSetHasBeenSet = true; m_tagSet = std::forward<TagSetT>(value); }
    template<typename TagSetT = Aws::Vector<S3Tag>>
    S3SetObjectTaggingOperation& WithTagSet(TagSetT&& value) { SetTagSet(std::forward<TagSetT>(value)); return *this;}
    template<typename TagSetT = S3Tag>
    S3SetObjectTaggingOperation& AddTagSet(TagSetT&& value) { m_tagSetHasBeenSet = true; m_tagSet.emplace_back(std::forward<TagSetT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<S3Tag> m_tagSet;
    bool m_tagSetHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
