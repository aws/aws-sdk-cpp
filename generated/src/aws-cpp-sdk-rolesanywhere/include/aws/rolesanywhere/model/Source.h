/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/SourceData.h>
#include <aws/rolesanywhere/model/TrustAnchorType.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The trust anchor type and its related certificate data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/Source">AWS
   * API Reference</a></p>
   */
  class Source
  {
  public:
    AWS_ROLESANYWHERE_API Source();
    AWS_ROLESANYWHERE_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data field of the trust anchor depending on its type. </p>
     */
    inline const SourceData& GetSourceData() const{ return m_sourceData; }

    /**
     * <p>The data field of the trust anchor depending on its type. </p>
     */
    inline bool SourceDataHasBeenSet() const { return m_sourceDataHasBeenSet; }

    /**
     * <p>The data field of the trust anchor depending on its type. </p>
     */
    inline void SetSourceData(const SourceData& value) { m_sourceDataHasBeenSet = true; m_sourceData = value; }

    /**
     * <p>The data field of the trust anchor depending on its type. </p>
     */
    inline void SetSourceData(SourceData&& value) { m_sourceDataHasBeenSet = true; m_sourceData = std::move(value); }

    /**
     * <p>The data field of the trust anchor depending on its type. </p>
     */
    inline Source& WithSourceData(const SourceData& value) { SetSourceData(value); return *this;}

    /**
     * <p>The data field of the trust anchor depending on its type. </p>
     */
    inline Source& WithSourceData(SourceData&& value) { SetSourceData(std::move(value)); return *this;}


    /**
     * <p>The type of the trust anchor. </p>
     */
    inline const TrustAnchorType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of the trust anchor. </p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of the trust anchor. </p>
     */
    inline void SetSourceType(const TrustAnchorType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of the trust anchor. </p>
     */
    inline void SetSourceType(TrustAnchorType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of the trust anchor. </p>
     */
    inline Source& WithSourceType(const TrustAnchorType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of the trust anchor. </p>
     */
    inline Source& WithSourceType(TrustAnchorType&& value) { SetSourceType(std::move(value)); return *this;}

  private:

    SourceData m_sourceData;
    bool m_sourceDataHasBeenSet = false;

    TrustAnchorType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
