/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SoftwarePackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

SoftwarePackage::SoftwarePackage() : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_epochHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_packageManagerHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fixedInVersionHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_sourceLayerHashHasBeenSet(false),
    m_sourceLayerArnHasBeenSet(false)
{
}

SoftwarePackage::SoftwarePackage(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_epochHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_packageManagerHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fixedInVersionHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_sourceLayerHashHasBeenSet(false),
    m_sourceLayerArnHasBeenSet(false)
{
  *this = jsonValue;
}

SoftwarePackage& SoftwarePackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Epoch"))
  {
    m_epoch = jsonValue.GetString("Epoch");

    m_epochHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Release"))
  {
    m_release = jsonValue.GetString("Release");

    m_releaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Architecture"))
  {
    m_architecture = jsonValue.GetString("Architecture");

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageManager"))
  {
    m_packageManager = jsonValue.GetString("PackageManager");

    m_packageManagerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilePath"))
  {
    m_filePath = jsonValue.GetString("FilePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FixedInVersion"))
  {
    m_fixedInVersion = jsonValue.GetString("FixedInVersion");

    m_fixedInVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Remediation"))
  {
    m_remediation = jsonValue.GetString("Remediation");

    m_remediationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLayerHash"))
  {
    m_sourceLayerHash = jsonValue.GetString("SourceLayerHash");

    m_sourceLayerHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLayerArn"))
  {
    m_sourceLayerArn = jsonValue.GetString("SourceLayerArn");

    m_sourceLayerArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SoftwarePackage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_epochHasBeenSet)
  {
   payload.WithString("Epoch", m_epoch);

  }

  if(m_releaseHasBeenSet)
  {
   payload.WithString("Release", m_release);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("Architecture", m_architecture);

  }

  if(m_packageManagerHasBeenSet)
  {
   payload.WithString("PackageManager", m_packageManager);

  }

  if(m_filePathHasBeenSet)
  {
   payload.WithString("FilePath", m_filePath);

  }

  if(m_fixedInVersionHasBeenSet)
  {
   payload.WithString("FixedInVersion", m_fixedInVersion);

  }

  if(m_remediationHasBeenSet)
  {
   payload.WithString("Remediation", m_remediation);

  }

  if(m_sourceLayerHashHasBeenSet)
  {
   payload.WithString("SourceLayerHash", m_sourceLayerHash);

  }

  if(m_sourceLayerArnHasBeenSet)
  {
   payload.WithString("SourceLayerArn", m_sourceLayerArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
