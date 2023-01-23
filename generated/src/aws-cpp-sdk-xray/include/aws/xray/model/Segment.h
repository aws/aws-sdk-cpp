/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A segment from a trace that has been ingested by the X-Ray service. The
   * segment can be compiled from documents uploaded with <a
   * href="https://docs.aws.amazon.com/xray/latest/api/API_PutTraceSegments.html">PutTraceSegments</a>,
   * or an <code>inferred</code> segment for a downstream service, generated from a
   * subsegment sent by the service that called it.</p> <p>For the full segment
   * document schema, see <a
   * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-api-segmentdocuments.html">Amazon
   * Web Services X-Ray Segment Documents</a> in the <i>Amazon Web Services X-Ray
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Segment">AWS API
   * Reference</a></p>
   */
  class Segment
  {
  public:
    AWS_XRAY_API Segment();
    AWS_XRAY_API Segment(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Segment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The segment's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The segment's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The segment's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The segment's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The segment's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The segment's ID.</p>
     */
    inline Segment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The segment's ID.</p>
     */
    inline Segment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The segment's ID.</p>
     */
    inline Segment& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The segment document.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The segment document.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The segment document.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The segment document.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The segment document.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>The segment document.</p>
     */
    inline Segment& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The segment document.</p>
     */
    inline Segment& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The segment document.</p>
     */
    inline Segment& WithDocument(const char* value) { SetDocument(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
