/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/AnnotationValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ServiceId.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about a segment annotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ValueWithServiceIds">AWS
   * API Reference</a></p>
   */
  class ValueWithServiceIds
  {
  public:
    AWS_XRAY_API ValueWithServiceIds() = default;
    AWS_XRAY_API ValueWithServiceIds(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ValueWithServiceIds& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Values of the annotation.</p>
     */
    inline const AnnotationValue& GetAnnotationValue() const { return m_annotationValue; }
    inline bool AnnotationValueHasBeenSet() const { return m_annotationValueHasBeenSet; }
    template<typename AnnotationValueT = AnnotationValue>
    void SetAnnotationValue(AnnotationValueT&& value) { m_annotationValueHasBeenSet = true; m_annotationValue = std::forward<AnnotationValueT>(value); }
    template<typename AnnotationValueT = AnnotationValue>
    ValueWithServiceIds& WithAnnotationValue(AnnotationValueT&& value) { SetAnnotationValue(std::forward<AnnotationValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline const Aws::Vector<ServiceId>& GetServiceIds() const { return m_serviceIds; }
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }
    template<typename ServiceIdsT = Aws::Vector<ServiceId>>
    void SetServiceIds(ServiceIdsT&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::forward<ServiceIdsT>(value); }
    template<typename ServiceIdsT = Aws::Vector<ServiceId>>
    ValueWithServiceIds& WithServiceIds(ServiceIdsT&& value) { SetServiceIds(std::forward<ServiceIdsT>(value)); return *this;}
    template<typename ServiceIdsT = ServiceId>
    ValueWithServiceIds& AddServiceIds(ServiceIdsT&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.emplace_back(std::forward<ServiceIdsT>(value)); return *this; }
    ///@}
  private:

    AnnotationValue m_annotationValue;
    bool m_annotationValueHasBeenSet = false;

    Aws::Vector<ServiceId> m_serviceIds;
    bool m_serviceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
