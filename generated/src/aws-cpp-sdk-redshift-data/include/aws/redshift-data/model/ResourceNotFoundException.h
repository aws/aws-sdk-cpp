/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>The Amazon Redshift Data API operation failed due to a missing resource.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ResourceNotFoundException();
    AWS_REDSHIFTDATAAPISERVICE_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The exception message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The exception message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The exception message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The exception message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The exception message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The exception message.</p>
     */
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The exception message.</p>
     */
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The exception message.</p>
     */
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Resource identifier associated with the exception.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Resource identifier associated with the exception.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Resource identifier associated with the exception.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Resource identifier associated with the exception.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Resource identifier associated with the exception.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Resource identifier associated with the exception.</p>
     */
    inline ResourceNotFoundException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Resource identifier associated with the exception.</p>
     */
    inline ResourceNotFoundException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Resource identifier associated with the exception.</p>
     */
    inline ResourceNotFoundException& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
