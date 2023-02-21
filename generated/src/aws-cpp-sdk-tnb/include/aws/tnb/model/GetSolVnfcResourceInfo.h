/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/GetSolVnfcResourceInfoMetadata.h>
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
   * <p>Details of resource associated with a network function.</p> <p>A network
   * instance is a single network created in Amazon Web Services TNB that can be
   * deployed and on which life-cycle operations (like terminate, update, and delete)
   * can be performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolVnfcResourceInfo">AWS
   * API Reference</a></p>
   */
  class GetSolVnfcResourceInfo
  {
  public:
    AWS_TNB_API GetSolVnfcResourceInfo();
    AWS_TNB_API GetSolVnfcResourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolVnfcResourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metadata of the network function compute.</p>
     */
    inline const GetSolVnfcResourceInfoMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the network function compute.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the network function compute.</p>
     */
    inline void SetMetadata(const GetSolVnfcResourceInfoMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the network function compute.</p>
     */
    inline void SetMetadata(GetSolVnfcResourceInfoMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the network function compute.</p>
     */
    inline GetSolVnfcResourceInfo& WithMetadata(const GetSolVnfcResourceInfoMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the network function compute.</p>
     */
    inline GetSolVnfcResourceInfo& WithMetadata(GetSolVnfcResourceInfoMetadata&& value) { SetMetadata(std::move(value)); return *this;}

  private:

    GetSolVnfcResourceInfoMetadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
