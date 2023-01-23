/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>CreateTapeOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapeWithBarcodeOutput">AWS
   * API Reference</a></p>
   */
  class CreateTapeWithBarcodeResult
  {
  public:
    AWS_STORAGEGATEWAY_API CreateTapeWithBarcodeResult();
    AWS_STORAGEGATEWAY_API CreateTapeWithBarcodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateTapeWithBarcodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique Amazon Resource Name (ARN) that represents the virtual tape that was
     * created.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>A unique Amazon Resource Name (ARN) that represents the virtual tape that was
     * created.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARN = value; }

    /**
     * <p>A unique Amazon Resource Name (ARN) that represents the virtual tape that was
     * created.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARN = std::move(value); }

    /**
     * <p>A unique Amazon Resource Name (ARN) that represents the virtual tape that was
     * created.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARN.assign(value); }

    /**
     * <p>A unique Amazon Resource Name (ARN) that represents the virtual tape that was
     * created.</p>
     */
    inline CreateTapeWithBarcodeResult& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>A unique Amazon Resource Name (ARN) that represents the virtual tape that was
     * created.</p>
     */
    inline CreateTapeWithBarcodeResult& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}

    /**
     * <p>A unique Amazon Resource Name (ARN) that represents the virtual tape that was
     * created.</p>
     */
    inline CreateTapeWithBarcodeResult& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

  private:

    Aws::String m_tapeARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
