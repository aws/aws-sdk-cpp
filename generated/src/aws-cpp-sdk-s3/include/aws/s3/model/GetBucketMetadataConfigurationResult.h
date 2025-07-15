/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/MetadataConfigurationResult.h>
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
   * <p> The S3 Metadata configuration for a general purpose bucket. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketMetadataConfigurationResult">AWS
   * API Reference</a></p>
   */
  class GetBucketMetadataConfigurationResult
  {
  public:
    AWS_S3_API GetBucketMetadataConfigurationResult() = default;
    AWS_S3_API GetBucketMetadataConfigurationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API GetBucketMetadataConfigurationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The metadata configuration for a general purpose bucket. </p>
     */
    inline const MetadataConfigurationResult& GetMetadataConfigurationResult() const { return m_metadataConfigurationResult; }
    inline bool MetadataConfigurationResultHasBeenSet() const { return m_metadataConfigurationResultHasBeenSet; }
    template<typename MetadataConfigurationResultT = MetadataConfigurationResult>
    void SetMetadataConfigurationResult(MetadataConfigurationResultT&& value) { m_metadataConfigurationResultHasBeenSet = true; m_metadataConfigurationResult = std::forward<MetadataConfigurationResultT>(value); }
    template<typename MetadataConfigurationResultT = MetadataConfigurationResult>
    GetBucketMetadataConfigurationResult& WithMetadataConfigurationResult(MetadataConfigurationResultT&& value) { SetMetadataConfigurationResult(std::forward<MetadataConfigurationResultT>(value)); return *this;}
    ///@}
  private:

    MetadataConfigurationResult m_metadataConfigurationResult;
    bool m_metadataConfigurationResultHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
