/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Contains status components of a Gremlin query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GremlinQueryStatusAttributes">AWS
   * API Reference</a></p>
   */
  class GremlinQueryStatusAttributes
  {
  public:
    AWS_NEPTUNEDATA_API GremlinQueryStatusAttributes();
    AWS_NEPTUNEDATA_API GremlinQueryStatusAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API GremlinQueryStatusAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline GremlinQueryStatusAttributes& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GremlinQueryStatusAttributes& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GremlinQueryStatusAttributes& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP response code returned fro the Gremlin query request..</p>
     */
    inline int GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }
    inline GremlinQueryStatusAttributes& WithCode(int value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of the Gremlin query status.</p>
     */
    inline Aws::Utils::DocumentView GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Utils::Document& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Utils::Document&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline GremlinQueryStatusAttributes& WithAttributes(const Aws::Utils::Document& value) { SetAttributes(value); return *this;}
    inline GremlinQueryStatusAttributes& WithAttributes(Aws::Utils::Document&& value) { SetAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_code;
    bool m_codeHasBeenSet = false;

    Aws::Utils::Document m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
