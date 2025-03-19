/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/MetadataTableConfigurationResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ErrorDetails.h>
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
   * <p> The metadata table configuration for a general purpose bucket.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketMetadataTableConfigurationResult">AWS
   * API Reference</a></p>
   */
  class GetBucketMetadataTableConfigurationResult
  {
  public:
    AWS_S3_API GetBucketMetadataTableConfigurationResult() = default;
    AWS_S3_API GetBucketMetadataTableConfigurationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API GetBucketMetadataTableConfigurationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The metadata table configuration for a general purpose bucket. </p>
     */
    inline const MetadataTableConfigurationResult& GetMetadataTableConfigurationResult() const { return m_metadataTableConfigurationResult; }
    inline bool MetadataTableConfigurationResultHasBeenSet() const { return m_metadataTableConfigurationResultHasBeenSet; }
    template<typename MetadataTableConfigurationResultT = MetadataTableConfigurationResult>
    void SetMetadataTableConfigurationResult(MetadataTableConfigurationResultT&& value) { m_metadataTableConfigurationResultHasBeenSet = true; m_metadataTableConfigurationResult = std::forward<MetadataTableConfigurationResultT>(value); }
    template<typename MetadataTableConfigurationResultT = MetadataTableConfigurationResult>
    GetBucketMetadataTableConfigurationResult& WithMetadataTableConfigurationResult(MetadataTableConfigurationResultT&& value) { SetMetadataTableConfigurationResult(std::forward<MetadataTableConfigurationResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the metadata table. The status values are: </p> <ul> <li> <p>
     * <code>CREATING</code> - The metadata table is in the process of being created in
     * the specified table bucket.</p> </li> <li> <p> <code>ACTIVE</code> - The
     * metadata table has been created successfully and records are being delivered to
     * the table. </p> </li> <li> <p> <code>FAILED</code> - Amazon S3 is unable to
     * create the metadata table, or Amazon S3 is unable to deliver records. See
     * <code>ErrorDetails</code> for details.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetBucketMetadataTableConfigurationResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>CreateBucketMetadataTableConfiguration</code> request succeeds,
     * but S3 Metadata was unable to create the table, this structure contains the
     * error code and error message. </p>
     */
    inline const ErrorDetails& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetails>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetails>
    GetBucketMetadataTableConfigurationResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    MetadataTableConfigurationResult m_metadataTableConfigurationResult;
    bool m_metadataTableConfigurationResultHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
