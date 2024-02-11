/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class GetAdapterVersionRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API GetAdapterVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAdapterVersion"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A string specifying a unique ID for the adapter version you want to retrieve
     * information for.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string specifying a unique ID for the adapter version you want to retrieve
     * information for.</p>
     */
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }

    /**
     * <p>A string specifying a unique ID for the adapter version you want to retrieve
     * information for.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterIdHasBeenSet = true; m_adapterId = value; }

    /**
     * <p>A string specifying a unique ID for the adapter version you want to retrieve
     * information for.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::move(value); }

    /**
     * <p>A string specifying a unique ID for the adapter version you want to retrieve
     * information for.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterIdHasBeenSet = true; m_adapterId.assign(value); }

    /**
     * <p>A string specifying a unique ID for the adapter version you want to retrieve
     * information for.</p>
     */
    inline GetAdapterVersionRequest& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string specifying a unique ID for the adapter version you want to retrieve
     * information for.</p>
     */
    inline GetAdapterVersionRequest& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string specifying a unique ID for the adapter version you want to retrieve
     * information for.</p>
     */
    inline GetAdapterVersionRequest& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>A string specifying the adapter version you want to retrieve information
     * for.</p>
     */
    inline const Aws::String& GetAdapterVersion() const{ return m_adapterVersion; }

    /**
     * <p>A string specifying the adapter version you want to retrieve information
     * for.</p>
     */
    inline bool AdapterVersionHasBeenSet() const { return m_adapterVersionHasBeenSet; }

    /**
     * <p>A string specifying the adapter version you want to retrieve information
     * for.</p>
     */
    inline void SetAdapterVersion(const Aws::String& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = value; }

    /**
     * <p>A string specifying the adapter version you want to retrieve information
     * for.</p>
     */
    inline void SetAdapterVersion(Aws::String&& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = std::move(value); }

    /**
     * <p>A string specifying the adapter version you want to retrieve information
     * for.</p>
     */
    inline void SetAdapterVersion(const char* value) { m_adapterVersionHasBeenSet = true; m_adapterVersion.assign(value); }

    /**
     * <p>A string specifying the adapter version you want to retrieve information
     * for.</p>
     */
    inline GetAdapterVersionRequest& WithAdapterVersion(const Aws::String& value) { SetAdapterVersion(value); return *this;}

    /**
     * <p>A string specifying the adapter version you want to retrieve information
     * for.</p>
     */
    inline GetAdapterVersionRequest& WithAdapterVersion(Aws::String&& value) { SetAdapterVersion(std::move(value)); return *this;}

    /**
     * <p>A string specifying the adapter version you want to retrieve information
     * for.</p>
     */
    inline GetAdapterVersionRequest& WithAdapterVersion(const char* value) { SetAdapterVersion(value); return *this;}

  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_adapterVersion;
    bool m_adapterVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
