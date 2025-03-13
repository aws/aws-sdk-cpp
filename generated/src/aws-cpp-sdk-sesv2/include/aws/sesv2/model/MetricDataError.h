/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/QueryErrorCode.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An error corresponding to the unsuccessful processing of a single metric data
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MetricDataError">AWS
   * API Reference</a></p>
   */
  class MetricDataError
  {
  public:
    AWS_SESV2_API MetricDataError() = default;
    AWS_SESV2_API MetricDataError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MetricDataError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MetricDataError& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query error code. Can be one of:</p> <ul> <li> <p>
     * <code>INTERNAL_FAILURE</code> – Amazon SES has failed to process one of the
     * queries.</p> </li> <li> <p> <code>ACCESS_DENIED</code> – You have insufficient
     * access to retrieve metrics based on the given query.</p> </li> </ul>
     */
    inline QueryErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(QueryErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline MetricDataError& WithCode(QueryErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    MetricDataError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    QueryErrorCode m_code{QueryErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
