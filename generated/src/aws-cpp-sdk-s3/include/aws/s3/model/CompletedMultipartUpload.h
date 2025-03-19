/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/CompletedPart.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>The container for the completed multipart upload details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CompletedMultipartUpload">AWS
   * API Reference</a></p>
   */
  class CompletedMultipartUpload
  {
  public:
    AWS_S3_API CompletedMultipartUpload() = default;
    AWS_S3_API CompletedMultipartUpload(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API CompletedMultipartUpload& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline const Aws::Vector<CompletedPart>& GetParts() const { return m_parts; }
    inline bool PartsHasBeenSet() const { return m_partsHasBeenSet; }
    template<typename PartsT = Aws::Vector<CompletedPart>>
    void SetParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts = std::forward<PartsT>(value); }
    template<typename PartsT = Aws::Vector<CompletedPart>>
    CompletedMultipartUpload& WithParts(PartsT&& value) { SetParts(std::forward<PartsT>(value)); return *this;}
    template<typename PartsT = CompletedPart>
    CompletedMultipartUpload& AddParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts.emplace_back(std::forward<PartsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CompletedPart> m_parts;
    bool m_partsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
