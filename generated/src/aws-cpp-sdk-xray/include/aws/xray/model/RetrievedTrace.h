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
    AWS_XRAY_API RetrievedTrace();
    AWS_XRAY_API RetrievedTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API RetrievedTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the span. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RetrievedTrace& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RetrievedTrace& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RetrievedTrace& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time in seconds between the start time of the root span and
     * the end time of the last span that completed. </p>
     */
    inline double GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RetrievedTrace& WithDuration(double value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Spans that comprise the trace. </p>
     */
    inline const Aws::Vector<Span>& GetSpans() const{ return m_spans; }
    inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
    inline void SetSpans(const Aws::Vector<Span>& value) { m_spansHasBeenSet = true; m_spans = value; }
    inline void SetSpans(Aws::Vector<Span>&& value) { m_spansHasBeenSet = true; m_spans = std::move(value); }
    inline RetrievedTrace& WithSpans(const Aws::Vector<Span>& value) { SetSpans(value); return *this;}
    inline RetrievedTrace& WithSpans(Aws::Vector<Span>&& value) { SetSpans(std::move(value)); return *this;}
    inline RetrievedTrace& AddSpans(const Span& value) { m_spansHasBeenSet = true; m_spans.push_back(value); return *this; }
    inline RetrievedTrace& AddSpans(Span&& value) { m_spansHasBeenSet = true; m_spans.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    double m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<Span> m_spans;
    bool m_spansHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
