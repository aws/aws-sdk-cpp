/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/FunctionArtifactMeta.h>
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
   * <p>Validates function package content metadata.</p> <p>A function package is a
   * .zip file in CSAR (Cloud Service Archive) format that contains a network
   * function (an ETSI standard telecommunication application) and function package
   * descriptor that uses the TOSCA standard to describe how the network functions
   * should run on your network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ValidateSolFunctionPackageContentMetadata">AWS
   * API Reference</a></p>
   */
  class ValidateSolFunctionPackageContentMetadata
  {
  public:
    AWS_TNB_API ValidateSolFunctionPackageContentMetadata();
    AWS_TNB_API ValidateSolFunctionPackageContentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ValidateSolFunctionPackageContentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const FunctionArtifactMeta& GetVnfd() const{ return m_vnfd; }

    
    inline bool VnfdHasBeenSet() const { return m_vnfdHasBeenSet; }

    
    inline void SetVnfd(const FunctionArtifactMeta& value) { m_vnfdHasBeenSet = true; m_vnfd = value; }

    
    inline void SetVnfd(FunctionArtifactMeta&& value) { m_vnfdHasBeenSet = true; m_vnfd = std::move(value); }

    
    inline ValidateSolFunctionPackageContentMetadata& WithVnfd(const FunctionArtifactMeta& value) { SetVnfd(value); return *this;}

    
    inline ValidateSolFunctionPackageContentMetadata& WithVnfd(FunctionArtifactMeta&& value) { SetVnfd(std::move(value)); return *this;}

  private:

    FunctionArtifactMeta m_vnfd;
    bool m_vnfdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
