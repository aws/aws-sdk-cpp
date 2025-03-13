/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/GeneratedManifestFormat.h>
#include <aws/s3control/model/JobManifestLocation.h>
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
   * <p>Describes the specified job's generated manifest. Batch Operations jobs
   * created with a ManifestGenerator populate details of this descriptor after
   * execution of the ManifestGenerator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3GeneratedManifestDescriptor">AWS
   * API Reference</a></p>
   */
  class S3GeneratedManifestDescriptor
  {
  public:
    AWS_S3CONTROL_API S3GeneratedManifestDescriptor() = default;
    AWS_S3CONTROL_API S3GeneratedManifestDescriptor(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3GeneratedManifestDescriptor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The format of the generated manifest.</p>
     */
    inline GeneratedManifestFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(GeneratedManifestFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline S3GeneratedManifestDescriptor& WithFormat(GeneratedManifestFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const JobManifestLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = JobManifestLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = JobManifestLocation>
    S3GeneratedManifestDescriptor& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    GeneratedManifestFormat m_format{GeneratedManifestFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    JobManifestLocation m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
