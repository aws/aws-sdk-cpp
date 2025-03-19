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
    AWS_ROLESANYWHERE_API Source() = default;
    AWS_ROLESANYWHERE_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data field of the trust anchor depending on its type. </p>
     */
    inline const SourceData& GetSourceData() const { return m_sourceData; }
    inline bool SourceDataHasBeenSet() const { return m_sourceDataHasBeenSet; }
    template<typename SourceDataT = SourceData>
    void SetSourceData(SourceDataT&& value) { m_sourceDataHasBeenSet = true; m_sourceData = std::forward<SourceDataT>(value); }
    template<typename SourceDataT = SourceData>
    Source& WithSourceData(SourceDataT&& value) { SetSourceData(std::forward<SourceDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the trust anchor. </p>
     */
    inline TrustAnchorType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(TrustAnchorType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline Source& WithSourceType(TrustAnchorType value) { SetSourceType(value); return *this;}
    ///@}
  private:

    SourceData m_sourceData;
    bool m_sourceDataHasBeenSet = false;

    TrustAnchorType m_sourceType{TrustAnchorType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
