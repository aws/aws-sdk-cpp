/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * An endpoint for ingesting source content for a Channel.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/IngestEndpoint">AWS
   * API Reference</a></p>
   */
  class IngestEndpoint
  {
  public:
    AWS_MEDIAPACKAGE_API IngestEndpoint();
    AWS_MEDIAPACKAGE_API IngestEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API IngestEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline IngestEndpoint& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline IngestEndpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline IngestEndpoint& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The system generated password for ingest authentication.
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline IngestEndpoint& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline IngestEndpoint& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline IngestEndpoint& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline IngestEndpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline IngestEndpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline IngestEndpoint& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * The system generated username for ingest authentication.
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline IngestEndpoint& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline IngestEndpoint& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline IngestEndpoint& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
