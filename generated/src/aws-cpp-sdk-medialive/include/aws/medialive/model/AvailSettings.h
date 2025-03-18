/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Esam.h>
#include <aws/medialive/model/Scte35SpliceInsert.h>
#include <aws/medialive/model/Scte35TimeSignalApos.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Avail Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AvailSettings">AWS
   * API Reference</a></p>
   */
  class AvailSettings
  {
  public:
    AWS_MEDIALIVE_API AvailSettings() = default;
    AWS_MEDIALIVE_API AvailSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AvailSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Esam& GetEsam() const { return m_esam; }
    inline bool EsamHasBeenSet() const { return m_esamHasBeenSet; }
    template<typename EsamT = Esam>
    void SetEsam(EsamT&& value) { m_esamHasBeenSet = true; m_esam = std::forward<EsamT>(value); }
    template<typename EsamT = Esam>
    AvailSettings& WithEsam(EsamT&& value) { SetEsam(std::forward<EsamT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scte35SpliceInsert& GetScte35SpliceInsert() const { return m_scte35SpliceInsert; }
    inline bool Scte35SpliceInsertHasBeenSet() const { return m_scte35SpliceInsertHasBeenSet; }
    template<typename Scte35SpliceInsertT = Scte35SpliceInsert>
    void SetScte35SpliceInsert(Scte35SpliceInsertT&& value) { m_scte35SpliceInsertHasBeenSet = true; m_scte35SpliceInsert = std::forward<Scte35SpliceInsertT>(value); }
    template<typename Scte35SpliceInsertT = Scte35SpliceInsert>
    AvailSettings& WithScte35SpliceInsert(Scte35SpliceInsertT&& value) { SetScte35SpliceInsert(std::forward<Scte35SpliceInsertT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scte35TimeSignalApos& GetScte35TimeSignalApos() const { return m_scte35TimeSignalApos; }
    inline bool Scte35TimeSignalAposHasBeenSet() const { return m_scte35TimeSignalAposHasBeenSet; }
    template<typename Scte35TimeSignalAposT = Scte35TimeSignalApos>
    void SetScte35TimeSignalApos(Scte35TimeSignalAposT&& value) { m_scte35TimeSignalAposHasBeenSet = true; m_scte35TimeSignalApos = std::forward<Scte35TimeSignalAposT>(value); }
    template<typename Scte35TimeSignalAposT = Scte35TimeSignalApos>
    AvailSettings& WithScte35TimeSignalApos(Scte35TimeSignalAposT&& value) { SetScte35TimeSignalApos(std::forward<Scte35TimeSignalAposT>(value)); return *this;}
    ///@}
  private:

    Esam m_esam;
    bool m_esamHasBeenSet = false;

    Scte35SpliceInsert m_scte35SpliceInsert;
    bool m_scte35SpliceInsertHasBeenSet = false;

    Scte35TimeSignalApos m_scte35TimeSignalApos;
    bool m_scte35TimeSignalAposHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
