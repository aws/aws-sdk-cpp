﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/JobManifestSpec.h>
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
   * <p>Contains the configuration information for a job's manifest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifest">AWS
   * API Reference</a></p>
   */
  class JobManifest
  {
  public:
    AWS_S3CONTROL_API JobManifest() = default;
    AWS_S3CONTROL_API JobManifest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobManifest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Describes the format of the specified job's manifest. If the manifest is in
     * CSV format, also describes the columns contained within the manifest.</p>
     */
    inline const JobManifestSpec& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = JobManifestSpec>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = JobManifestSpec>
    JobManifest& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the information required to locate the specified job's manifest.
     * Manifests can't be imported from directory buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-overview.html">Directory
     * buckets</a>.</p>
     */
    inline const JobManifestLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = JobManifestLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = JobManifestLocation>
    JobManifest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    JobManifestSpec m_spec;
    bool m_specHasBeenSet = false;

    JobManifestLocation m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
