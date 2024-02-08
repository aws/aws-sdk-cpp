/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/UnprocessableExceptionReason.h>
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
namespace NeptuneGraph
{
namespace Model
{

  /**
   * <p>Request cannot be processed due to known reasons. Eg. partition
   * full.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/UnprocessableException">AWS
   * API Reference</a></p>
   */
  class UnprocessableException
  {
  public:
    AWS_NEPTUNEGRAPH_API UnprocessableException();
    AWS_NEPTUNEGRAPH_API UnprocessableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API UnprocessableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline UnprocessableException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline UnprocessableException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline UnprocessableException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason for the unprocessable exception.</p>
     */
    inline const UnprocessableExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the unprocessable exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the unprocessable exception.</p>
     */
    inline void SetReason(const UnprocessableExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the unprocessable exception.</p>
     */
    inline void SetReason(UnprocessableExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the unprocessable exception.</p>
     */
    inline UnprocessableException& WithReason(const UnprocessableExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the unprocessable exception.</p>
     */
    inline UnprocessableException& WithReason(UnprocessableExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    UnprocessableExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
