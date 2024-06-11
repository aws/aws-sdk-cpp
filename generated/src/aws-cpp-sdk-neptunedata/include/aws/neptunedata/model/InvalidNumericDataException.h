/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Raised when invalid numerical data is encountered when servicing a
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/InvalidNumericDataException">AWS
   * API Reference</a></p>
   */
  class InvalidNumericDataException
  {
  public:
    AWS_NEPTUNEDATA_API InvalidNumericDataException();
    AWS_NEPTUNEDATA_API InvalidNumericDataException(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API InvalidNumericDataException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A detailed message describing the problem.</p>
     */
    inline const Aws::String& GetDetailedMessage() const{ return m_detailedMessage; }
    inline bool DetailedMessageHasBeenSet() const { return m_detailedMessageHasBeenSet; }
    inline void SetDetailedMessage(const Aws::String& value) { m_detailedMessageHasBeenSet = true; m_detailedMessage = value; }
    inline void SetDetailedMessage(Aws::String&& value) { m_detailedMessageHasBeenSet = true; m_detailedMessage = std::move(value); }
    inline void SetDetailedMessage(const char* value) { m_detailedMessageHasBeenSet = true; m_detailedMessage.assign(value); }
    inline InvalidNumericDataException& WithDetailedMessage(const Aws::String& value) { SetDetailedMessage(value); return *this;}
    inline InvalidNumericDataException& WithDetailedMessage(Aws::String&& value) { SetDetailedMessage(std::move(value)); return *this;}
    inline InvalidNumericDataException& WithDetailedMessage(const char* value) { SetDetailedMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the request in question.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline InvalidNumericDataException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InvalidNumericDataException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InvalidNumericDataException& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status code returned with the exception.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline InvalidNumericDataException& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline InvalidNumericDataException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline InvalidNumericDataException& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}
  private:

    Aws::String m_detailedMessage;
    bool m_detailedMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
