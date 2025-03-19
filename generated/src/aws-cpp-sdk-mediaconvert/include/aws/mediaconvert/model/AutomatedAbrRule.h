/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/MinBottomRenditionSize.h>
#include <aws/mediaconvert/model/MinTopRenditionSize.h>
#include <aws/mediaconvert/model/RuleType.h>
#include <aws/mediaconvert/model/AllowedRenditionSize.h>
#include <aws/mediaconvert/model/ForceIncludeRenditionSize.h>
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
   * Specify one or more Automated ABR rule types. Note: Force include and Allowed
   * renditions are mutually exclusive.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AutomatedAbrRule">AWS
   * API Reference</a></p>
   */
  class AutomatedAbrRule
  {
  public:
    AWS_MEDIACONVERT_API AutomatedAbrRule() = default;
    AWS_MEDIACONVERT_API AutomatedAbrRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AutomatedAbrRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When customer adds the allowed renditions rule for auto ABR ladder, they are
     * required to add at leat one rendition to allowedRenditions list
     */
    inline const Aws::Vector<AllowedRenditionSize>& GetAllowedRenditions() const { return m_allowedRenditions; }
    inline bool AllowedRenditionsHasBeenSet() const { return m_allowedRenditionsHasBeenSet; }
    template<typename AllowedRenditionsT = Aws::Vector<AllowedRenditionSize>>
    void SetAllowedRenditions(AllowedRenditionsT&& value) { m_allowedRenditionsHasBeenSet = true; m_allowedRenditions = std::forward<AllowedRenditionsT>(value); }
    template<typename AllowedRenditionsT = Aws::Vector<AllowedRenditionSize>>
    AutomatedAbrRule& WithAllowedRenditions(AllowedRenditionsT&& value) { SetAllowedRenditions(std::forward<AllowedRenditionsT>(value)); return *this;}
    template<typename AllowedRenditionsT = AllowedRenditionSize>
    AutomatedAbrRule& AddAllowedRenditions(AllowedRenditionsT&& value) { m_allowedRenditionsHasBeenSet = true; m_allowedRenditions.emplace_back(std::forward<AllowedRenditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * When customer adds the force include renditions rule for auto ABR ladder, they
     * are required to add at leat one rendition to forceIncludeRenditions list
     */
    inline const Aws::Vector<ForceIncludeRenditionSize>& GetForceIncludeRenditions() const { return m_forceIncludeRenditions; }
    inline bool ForceIncludeRenditionsHasBeenSet() const { return m_forceIncludeRenditionsHasBeenSet; }
    template<typename ForceIncludeRenditionsT = Aws::Vector<ForceIncludeRenditionSize>>
    void SetForceIncludeRenditions(ForceIncludeRenditionsT&& value) { m_forceIncludeRenditionsHasBeenSet = true; m_forceIncludeRenditions = std::forward<ForceIncludeRenditionsT>(value); }
    template<typename ForceIncludeRenditionsT = Aws::Vector<ForceIncludeRenditionSize>>
    AutomatedAbrRule& WithForceIncludeRenditions(ForceIncludeRenditionsT&& value) { SetForceIncludeRenditions(std::forward<ForceIncludeRenditionsT>(value)); return *this;}
    template<typename ForceIncludeRenditionsT = ForceIncludeRenditionSize>
    AutomatedAbrRule& AddForceIncludeRenditions(ForceIncludeRenditionsT&& value) { m_forceIncludeRenditionsHasBeenSet = true; m_forceIncludeRenditions.emplace_back(std::forward<ForceIncludeRenditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Use Min bottom rendition size to specify a minimum size for the lowest
     * resolution in your ABR stack. * The lowest resolution in your ABR stack will be
     * equal to or greater than the value that you enter. For example: If you specify
     * 640x360 the lowest resolution in your ABR stack will be equal to or greater than
     * to 640x360. * If you specify a Min top rendition size rule, the value that you
     * specify for Min bottom rendition size must be less than, or equal to, Min top
     * rendition size.
     */
    inline const MinBottomRenditionSize& GetMinBottomRenditionSize() const { return m_minBottomRenditionSize; }
    inline bool MinBottomRenditionSizeHasBeenSet() const { return m_minBottomRenditionSizeHasBeenSet; }
    template<typename MinBottomRenditionSizeT = MinBottomRenditionSize>
    void SetMinBottomRenditionSize(MinBottomRenditionSizeT&& value) { m_minBottomRenditionSizeHasBeenSet = true; m_minBottomRenditionSize = std::forward<MinBottomRenditionSizeT>(value); }
    template<typename MinBottomRenditionSizeT = MinBottomRenditionSize>
    AutomatedAbrRule& WithMinBottomRenditionSize(MinBottomRenditionSizeT&& value) { SetMinBottomRenditionSize(std::forward<MinBottomRenditionSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Min top rendition size to specify a minimum size for the highest resolution
     * in your ABR stack. * The highest resolution in your ABR stack will be equal to
     * or greater than the value that you enter. For example: If you specify 1280x720
     * the highest resolution in your ABR stack will be equal to or greater than
     * 1280x720. * If you specify a value for Max resolution, the value that you
     * specify for Min top rendition size must be less than, or equal to, Max
     * resolution.
     */
    inline const MinTopRenditionSize& GetMinTopRenditionSize() const { return m_minTopRenditionSize; }
    inline bool MinTopRenditionSizeHasBeenSet() const { return m_minTopRenditionSizeHasBeenSet; }
    template<typename MinTopRenditionSizeT = MinTopRenditionSize>
    void SetMinTopRenditionSize(MinTopRenditionSizeT&& value) { m_minTopRenditionSizeHasBeenSet = true; m_minTopRenditionSize = std::forward<MinTopRenditionSizeT>(value); }
    template<typename MinTopRenditionSizeT = MinTopRenditionSize>
    AutomatedAbrRule& WithMinTopRenditionSize(MinTopRenditionSizeT&& value) { SetMinTopRenditionSize(std::forward<MinTopRenditionSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Min top rendition size to specify a minimum size for the highest resolution
     * in your ABR stack. * The highest resolution in your ABR stack will be equal to
     * or greater than the value that you enter. For example: If you specify 1280x720
     * the highest resolution in your ABR stack will be equal to or greater than
     * 1280x720. * If you specify a value for Max resolution, the value that you
     * specify for Min top rendition size must be less than, or equal to, Max
     * resolution. Use Min bottom rendition size to specify a minimum size for the
     * lowest resolution in your ABR stack. * The lowest resolution in your ABR stack
     * will be equal to or greater than the value that you enter. For example: If you
     * specify 640x360 the lowest resolution in your ABR stack will be equal to or
     * greater than to 640x360. * If you specify a Min top rendition size rule, the
     * value that you specify for Min bottom rendition size must be less than, or equal
     * to, Min top rendition size. Use Force include renditions to specify one or more
     * resolutions to include your ABR stack. * (Recommended) To optimize automated
     * ABR, specify as few resolutions as possible. * (Required) The number of
     * resolutions that you specify must be equal to, or less than, the Max renditions
     * setting. * If you specify a Min top rendition size rule, specify at least one
     * resolution that is equal to, or greater than, Min top rendition size. * If you
     * specify a Min bottom rendition size rule, only specify resolutions that are
     * equal to, or greater than, Min bottom rendition size. * If you specify a Force
     * include renditions rule, do not specify a separate rule for Allowed renditions.
     * * Note: The ABR stack may include other resolutions that you do not specify
     * here, depending on the Max renditions setting. Use Allowed renditions to specify
     * a list of possible resolutions in your ABR stack. * (Required) The number of
     * resolutions that you specify must be equal to, or greater than, the Max
     * renditions setting. * MediaConvert will create an ABR stack exclusively from the
     * list of resolutions that you specify. * Some resolutions in the Allowed
     * renditions list may not be included, however you can force a resolution to be
     * included by setting Required to ENABLED. * You must specify at least one
     * resolution that is greater than or equal to any resolutions that you specify in
     * Min top rendition size or Min bottom rendition size. * If you specify Allowed
     * renditions, you must not specify a separate rule for Force include renditions.
     */
    inline RuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AutomatedAbrRule& WithType(RuleType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Vector<AllowedRenditionSize> m_allowedRenditions;
    bool m_allowedRenditionsHasBeenSet = false;

    Aws::Vector<ForceIncludeRenditionSize> m_forceIncludeRenditions;
    bool m_forceIncludeRenditionsHasBeenSet = false;

    MinBottomRenditionSize m_minBottomRenditionSize;
    bool m_minBottomRenditionSizeHasBeenSet = false;

    MinTopRenditionSize m_minTopRenditionSize;
    bool m_minTopRenditionSizeHasBeenSet = false;

    RuleType m_type{RuleType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
