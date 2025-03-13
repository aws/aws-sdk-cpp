/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/Span.h>
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
   * <p> Retrieved collection of spans with matching trace IDs. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/RetrievedTrace">AWS
   * API Reference</a></p>
   */
  class RetrievedTrace
  {
  public:
    AWS_XRAY_API RetrievedTrace() = default;
    AWS_XRAY_API RetrievedTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API RetrievedTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the span. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RetrievedTrace& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time in seconds between the start time of the root span and
     * the end time of the last span that completed. </p>
     */
    inline double GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RetrievedTrace& WithDuration(double value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Spans that comprise the trace. </p>
     */
    inline const Aws::Vector<Span>& GetSpans() const { return m_spans; }
    inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
    template<typename SpansT = Aws::Vector<Span>>
    void SetSpans(SpansT&& value) { m_spansHasBeenSet = true; m_spans = std::forward<SpansT>(value); }
    template<typename SpansT = Aws::Vector<Span>>
    RetrievedTrace& WithSpans(SpansT&& value) { SetSpans(std::forward<SpansT>(value)); return *this;}
    template<typename SpansT = Span>
    RetrievedTrace& AddSpans(SpansT&& value) { m_spansHasBeenSet = true; m_spans.emplace_back(std::forward<SpansT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    double m_duration{0.0};
    bool m_durationHasBeenSet = false;

    Aws::Vector<Span> m_spans;
    bool m_spansHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
