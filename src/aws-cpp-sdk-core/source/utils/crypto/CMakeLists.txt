if (USE_OPENSSL)
    add_subdirectory(openssl)
endif ()
if (USE_BCRYPT)

endif ()
if (ENABLE_BCRYPT_ENCRYPTION)
    add_subdirectory(bcrypt)
elseif (ENABLE_OPENSSL_ENCRYPTION)
    add_subdirectory(openssl)
elseif (ENABLE_COMMONCRYPTO_ENCRYPTION)
    add_subdirectory(commoncrypto)
else ()
    message(FATAL_ERROR "No crypto library enabled")
endif ()

target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Cipher.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ContentCryptoMaterial.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ContentCryptoScheme.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/CRC32.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/CryptoBuf.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/CryptoStream.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/EncryptionMaterials.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/KeyWrapAlgorithm.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/MD5.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Sha1.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Sha256.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Sha256HMAC.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/factory/Factories.cpp
        )