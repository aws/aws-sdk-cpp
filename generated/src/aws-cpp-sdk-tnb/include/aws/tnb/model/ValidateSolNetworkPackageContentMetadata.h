/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/NetworkArtifactMeta.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace tnb
{
namespace Model
{

  /**
   * <p>Validates network package content metadata.</p> <p>A network package is a
   * .zip file in CSAR (Cloud Service Archive) format defines the function packages
   * you want to deploy and the Amazon Web Services infrastructure you want to deploy
   * them on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ValidateSolNetworkPackageContentMetadata">AWS
   * API Reference</a></p>
   */
  class ValidateSolNetworkPackageContentMetadata
  {
  public:
    AWS_TNB_API ValidateSolNetworkPackageContentMetadata();
    AWS_TNB_API ValidateSolNetworkPackageContentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ValidateSolNetworkPackageContentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NetworkArtifactMeta& GetNsd() const{ return m_nsd; }

    
    inline bool NsdHasBeenSet() const { return m_nsdHasBeenSet; }

    
    inline void SetNsd(const NetworkArtifactMeta& value) { m_nsdHasBeenSet = true; m_nsd = value; }

    
    inline void SetNsd(NetworkArtifactMeta&& value) { m_nsdHasBeenSet = true; m_nsd = std::move(value); }

    
    inline ValidateSolNetworkPackageContentMetadata& WithNsd(const NetworkArtifactMeta& value) { SetNsd(value); return *this;}

    
    inline ValidateSolNetworkPackageContentMetadata& WithNsd(NetworkArtifactMeta&& value) { SetNsd(std::move(value)); return *this;}

  private:

    NetworkArtifactMeta m_nsd;
    bool m_nsdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
