/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CopyProtectionAction.h>
#include <aws/mediaconvert/model/VchipAction.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * If your source content has EIA-608 Line 21 Data Services, enable this feature to
   * specify what MediaConvert does with the Extended Data Services (XDS) packets.
   * You can choose to pass through XDS packets, or remove them from the output. For
   * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
   * Content Advisory.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ExtendedDataServices">AWS
   * API Reference</a></p>
   */
  class ExtendedDataServices
  {
  public:
    AWS_MEDIACONVERT_API ExtendedDataServices();
    AWS_MEDIACONVERT_API ExtendedDataServices(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ExtendedDataServices& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The action to take on copy and redistribution control XDS packets.  If you
     * select PASSTHROUGH, packets will not be changed. If you select STRIP, any
     * packets will be removed in output captions.
     */
    inline const CopyProtectionAction& GetCopyProtectionAction() const{ return m_copyProtectionAction; }

    /**
     * The action to take on copy and redistribution control XDS packets.  If you
     * select PASSTHROUGH, packets will not be changed. If you select STRIP, any
     * packets will be removed in output captions.
     */
    inline bool CopyProtectionActionHasBeenSet() const { return m_copyProtectionActionHasBeenSet; }

    /**
     * The action to take on copy and redistribution control XDS packets.  If you
     * select PASSTHROUGH, packets will not be changed. If you select STRIP, any
     * packets will be removed in output captions.
     */
    inline void SetCopyProtectionAction(const CopyProtectionAction& value) { m_copyProtectionActionHasBeenSet = true; m_copyProtectionAction = value; }

    /**
     * The action to take on copy and redistribution control XDS packets.  If you
     * select PASSTHROUGH, packets will not be changed. If you select STRIP, any
     * packets will be removed in output captions.
     */
    inline void SetCopyProtectionAction(CopyProtectionAction&& value) { m_copyProtectionActionHasBeenSet = true; m_copyProtectionAction = std::move(value); }

    /**
     * The action to take on copy and redistribution control XDS packets.  If you
     * select PASSTHROUGH, packets will not be changed. If you select STRIP, any
     * packets will be removed in output captions.
     */
    inline ExtendedDataServices& WithCopyProtectionAction(const CopyProtectionAction& value) { SetCopyProtectionAction(value); return *this;}

    /**
     * The action to take on copy and redistribution control XDS packets.  If you
     * select PASSTHROUGH, packets will not be changed. If you select STRIP, any
     * packets will be removed in output captions.
     */
    inline ExtendedDataServices& WithCopyProtectionAction(CopyProtectionAction&& value) { SetCopyProtectionAction(std::move(value)); return *this;}


    /**
     * The action to take on content advisory XDS packets.  If you select PASSTHROUGH,
     * packets will not be changed. If you select STRIP, any packets will be removed in
     * output captions.
     */
    inline const VchipAction& GetVchipAction() const{ return m_vchipAction; }

    /**
     * The action to take on content advisory XDS packets.  If you select PASSTHROUGH,
     * packets will not be changed. If you select STRIP, any packets will be removed in
     * output captions.
     */
    inline bool VchipActionHasBeenSet() const { return m_vchipActionHasBeenSet; }

    /**
     * The action to take on content advisory XDS packets.  If you select PASSTHROUGH,
     * packets will not be changed. If you select STRIP, any packets will be removed in
     * output captions.
     */
    inline void SetVchipAction(const VchipAction& value) { m_vchipActionHasBeenSet = true; m_vchipAction = value; }

    /**
     * The action to take on content advisory XDS packets.  If you select PASSTHROUGH,
     * packets will not be changed. If you select STRIP, any packets will be removed in
     * output captions.
     */
    inline void SetVchipAction(VchipAction&& value) { m_vchipActionHasBeenSet = true; m_vchipAction = std::move(value); }

    /**
     * The action to take on content advisory XDS packets.  If you select PASSTHROUGH,
     * packets will not be changed. If you select STRIP, any packets will be removed in
     * output captions.
     */
    inline ExtendedDataServices& WithVchipAction(const VchipAction& value) { SetVchipAction(value); return *this;}

    /**
     * The action to take on content advisory XDS packets.  If you select PASSTHROUGH,
     * packets will not be changed. If you select STRIP, any packets will be removed in
     * output captions.
     */
    inline ExtendedDataServices& WithVchipAction(VchipAction&& value) { SetVchipAction(std::move(value)); return *this;}

  private:

    CopyProtectionAction m_copyProtectionAction;
    bool m_copyProtectionActionHasBeenSet = false;

    VchipAction m_vchipAction;
    bool m_vchipActionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
